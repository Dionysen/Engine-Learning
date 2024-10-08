#include <GL/glew.h>
#include <Windows.h>
#include <iostream>

// 着色器
const char* vertexShaderSource   = "#version 330 core\n"
                                   "layout (location = 0) in vec3 aPos;\n"
                                   "void main()\n"
                                   "{\n"
                                   "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
                                   "}\0";
const char* fragmentShaderSource = "#version 330 core\n"
                                   "out vec4 FragColor;\n"
                                   "void main()\n"
                                   "{\n"
                                   "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
                                   "}\n\0";

// 回调函数的声明
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// 入口函数
int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_ PSTR szCmdLine, _In_ int ICmdShow)
{
    // 创建窗口类
    WNDCLASSEX wndclass{};
    wndclass.cbSize        = sizeof(WNDCLASSEX);
    wndclass.lpfnWndProc   = WndProc;
    wndclass.hInstance     = GetModuleHandle(NULL);
    wndclass.lpszClassName = "Win32 Game Window";

    // 注册窗口类
    RegisterClassEx(&wndclass);

    // 获取屏幕分辨率
    int ScreenWidth  = GetSystemMetrics(SM_CXSCREEN);
    int ScreenHeight = GetSystemMetrics(SM_CYSCREEN);
    int clientWidth  = 800;
    int clientHeight = 600;

    RECT windowRect;

    // 设置窗口位置和大小
    SetRect(&windowRect, (ScreenWidth / 2) - (clientWidth / 2), (ScreenHeight / 2) - (clientHeight / 2), (ScreenWidth / 2) + (clientWidth / 2),
            (ScreenHeight / 2) + (clientHeight / 2));

    // 创建窗口
    const char windowName[] = "OpenGL Window";
    HWND       hwnd         = CreateWindowEx(0, wndclass.lpszClassName, windowName, WS_OVERLAPPEDWINDOW, windowRect.left, windowRect.top,
                                             windowRect.right - windowRect.left, windowRect.bottom - windowRect.top, NULL, NULL, hinstance, szCmdLine);

    // 获取设备上下文
    HDC hdc = GetDC(hwnd);

    // 设置像素格式
    PIXELFORMATDESCRIPTOR pfd;

    memset(&pfd, 0, sizeof(PIXELFORMATDESCRIPTOR));
    pfd.nSize      = sizeof(PIXELFORMATDESCRIPTOR);
    pfd.nVersion   = 1;
    pfd.dwFlags    = PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;

    // 选择像素格式
    int pixelFormat = ChoosePixelFormat(hdc, &pfd);
    SetPixelFormat(hdc, pixelFormat, &pfd);

    // 创建渲染上下文
    HGLRC hglrc = wglCreateContext(hdc);
    wglMakeCurrent(hdc, hglrc);

    // 初始化Glew
    if (glewInit() != GLEW_OK)
    {
        std::cout << "Could not initialize GLEW \n";
    }
    else
    {
        std::cout << "OpenGL Version " << glewGetString(GLEW_VERSION) << std::endl;
    }


    // =======================================================================
    // ================================= 创建渲染对象 ==========================
    // =======================================================================
    unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
    // check for shader compile errors
    int  success;
    char infoLog[512];
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
    }
    // fragment shader
    unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
    // check for shader compile errors
    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
    }
    // link shaders
    unsigned int shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);
    // check for linking errors
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success)
    {
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
    }
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    // set up vertex data (and buffer(s)) and configure vertex attributes
    // ------------------------------------------------------------------
    float vertices[] = {
        -0.5f, -0.5f, 0.0f,  // left
        0.5f,  -0.5f, 0.0f,  // right
        0.0f,  0.5f,  0.0f   // top
    };

    GLuint VBO, VAO;

    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    // bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    // note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards
    // we can safely unbind
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    // You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
    // VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
    glBindVertexArray(0);
    // =======================================================================

    // 显示窗口
    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);

    // 获取时间
    DWORD lastTick = GetTickCount64();
    MSG   msg;

    // 渲染循环
    while (true)
    {
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT)
            {
                break;
            }
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        // 计算时间差
        DWORD thisTick = GetTickCount64();
        float dt       = float(thisTick - lastTick) * 0.001f;
        lastTick       = thisTick;

        // 获取窗口大小
        RECT clientRect;
        GetClientRect(hwnd, &clientRect);
        clientWidth  = clientRect.right - clientRect.left;
        clientHeight = clientRect.bottom - clientRect.top;

        // 设置视口
        glViewport(0, 0, clientWidth, clientHeight);
        glEnable(GL_DEPTH_TEST);
        glEnable(GL_CULL_FACE);
        glPointSize(5.0f);

        // 清除颜色缓冲区
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

        // 使用着色器程序渲染
        glUseProgram(shaderProgram);
        glBindVertexArray(
            VAO);  // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
        glDrawArrays(GL_TRIANGLES, 0, 3);

        // 交换缓冲区
        SwapBuffers(hdc);

        // 垂直同步
        // if (vsynch != 0)
        // {
        // 	glFinish();
        // }
    }
    return (int)msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
    switch (iMsg)
    {
    case WM_CLOSE:
        DestroyWindow(hwnd);
        break;

    case WM_DESTROY:
        HDC   hdc   = GetDC(hwnd);
        HGLRC hglrc = wglGetCurrentContext();

        glBindVertexArray(0);

        wglMakeCurrent(NULL, NULL);
        wglDeleteContext(hglrc);
        ReleaseDC(hwnd, hdc);
        PostQuitMessage(0);
        break;
    }

    return DefWindowProc(hwnd, iMsg, wParam, lParam);
}