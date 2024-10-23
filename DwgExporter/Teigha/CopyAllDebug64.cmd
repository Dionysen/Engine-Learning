

echo "------------Teigha: Dll拷贝-----------------"

set TargetPath="E:\PRJ\git_GMP_Master\source\Externals\Teigha\exe\vc14_amd64dlldbg\"
set TargetLibr="E:\PRJ\git_GMP_Master\source\Externals\Teigha\lib\vc14_amd64dlldbg\"

set SourcePath="E:\Teigha\Teigha2018_GMP\exe\vc14_amd64dlldbg\"
set SourceLibr="E:\Teigha\Teigha2018_GMP\lib\vc14_amd64dlldbg\"

echo 目标路径: %TargetPath%
echo Teigha路径: %SourcePath%

set TeighaVersion=_19.7src_14
echo Teigha版本号:%TeighaVersion%

Copy /Y %SourcePath%sisl.dll %TargetPath%
Copy /Y %SourcePath%TD_Alloc%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_Db%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_DbRoot%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_Ge%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_Gi%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_Gs%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_Root%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_SpatialIndex%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_BrepRenderer%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_BR%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_AcisBuilder%TeighaVersion%.dll %TargetPath%

Copy /Y %SourcePath%ExFieldEvaluator%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%ModelerGeometry%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%RasterProcessor%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%RecomputeDimBlock%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%TD_DynBlocks%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%TG_ModelerGeometry%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%WinBitmap%TeighaVersion%.txv %TargetPath%
Copy /Y %SourcePath%RxRasterServices%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%zlib.dll %TargetPath%

echo "------------Teigha2019追加的库-----------------"
Copy /Y %SourcePath%TD_ZLib.dll %TargetPath%
Copy /Y %SourcePath%TD_DbCore%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_BrepBuilder%TeighaVersion%.dll %TargetPath%
Copy /Y %SourcePath%TD_DbEntities%TeighaVersion%.tx %TargetPath%

Copy /Y %SourcePath%RText%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%TD_DbIO%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%ATEXT%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%WipeOut%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%AcMPolygonObj15%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%ACCAMERA%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%SCENEOE%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%ISM%TeighaVersion%.tx %TargetPath%
Copy /Y %SourcePath%DbCryptModule%TeighaVersion%.tx %TargetPath%
 
echo "------------Teigha: LIB拷贝-----------------"
Copy /Y %SourceLibr%TD_AcisBuilder.lib %TargetLibr%
Copy /Y %SourceLibr%TD_ExamplesCommon.lib %TargetLibr%
Copy /Y %SourceLibr%TD_Alloc.lib %TargetLibr%
Copy /Y %SourceLibr%TD_Key.lib %TargetLibr%
Copy /Y %SourceLibr%TD_Db.lib %TargetLibr%
Copy /Y %SourceLibr%TD_Root.lib %TargetLibr%
Copy /Y %SourceLibr%TD_DbRoot.lib %TargetLibr%
Copy /Y %SourceLibr%TD_Ge.lib %TargetLibr%
Copy /Y %SourceLibr%TD_Br.lib %TargetLibr%
Copy /Y %SourceLibr%TD_Gs.lib %TargetLibr%
Copy /Y %SourceLibr%TD_Gi.lib %TargetLibr%
Copy /Y %SourceLibr%TD_BrepRenderer.lib %TargetLibr%
Copy /Y %SourceLibr%ModelerGeometry.lib %TargetLibr%
Copy /Y %SourceLibr%sisl.lib %TargetLibr%
Copy /Y %SourceLibr%ws2_32.lib %TargetLibr%
Copy /Y %SourceLibr%Crypt32.lib %TargetLibr%
Copy /Y %SourceLibr%RText.lib %TargetLibr%
Copy /Y %SourceLibr%TD_DbIO.lib %TargetLibr%
Copy /Y %SourceLibr%ATEXT.lib %TargetLibr%
Copy /Y %SourceLibr%WipeOut.lib %TargetLibr%
Copy /Y %SourceLibr%AcMPolygonObj15.lib %TargetLibr%
Copy /Y %SourceLibr%ACCAMERA.lib %TargetLibr%
Copy /Y %SourceLibr%SCENEOE.lib %TargetLibr%
Copy /Y %SourceLibr%UTF.lib %TargetLibr%
Copy /Y %SourceLibr%ISM.lib %TargetLibr%
Copy /Y %SourceLibr%TD_DbCore.lib %TargetLibr%
Copy /Y %SourceLibr%TD_DbEntities.lib %TargetLibr%
Copy /Y %SourceLibr%TD_DrawingsExamplesCommon.lib %TargetLibr%