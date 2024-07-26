" ------ Just keymap ------
inoremap jj <ESC>
vnoremap jj <ESC> 

" ------ 方向键 ------ 
noremap i k
noremap I 5k
noremap K 5j
noremap k j

noremap j h
noremap h i
noremap J 5h
noremap L 5l

noremap H I

" ------ 括号自动对应 ------ 
" inoremap ( ()<ESC>i
" inoremap ) <c-r>=ClosePair(')')<CR>
" inoremap { {<CR>}<ESC>O
" inoremap } <c-r>=ClosePair('}')<CR>
" inoremap [ []<ESC>i
" inoremap ] <c-r>=ClosePair(']')<CR>
" inoremap ' ''<ESC>i

" ------ Other setting ------ 
" j+i jump out brace
imap ji jjla
" leader key
let mapleader="\<space>"
" setting backspace to reindent
set backspace=indent,eol,start

" ------ Exit, Write, Save, Resource ------ 
map Q :q!<CR>
map W :w<CR>
map S :wq<CR>