/*

Original work: https://github.com/iorlas/D3D9Proxy

*/
//FIXME: correct this to be right, as i'm not shure
/*
MIT License

Copyright(c) 2018-2019 megai2

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
#pragma once

bool d3d9_proxy_dll_main(HINSTANCE hInst, DWORD reason, LPVOID);

void D3D9ProxyCb_set_OnDevCreate(d3d9ProxyCB_OnDevCreate pxFun);
void D3D9ProxyCb_set_OnDevDestroy(d3d9ProxyCB_OnDevDestroy pxFun);

d3d9ProxyCB_OnDevCreate D3D9ProxyCb_get_OnDevCreate();
d3d9ProxyCB_OnDevDestroy D3D9ProxyCb_get_OnDevDestroy();