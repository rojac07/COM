
AtlCarServerps.dll: dlldata.obj AtlCarServer_p.obj AtlCarServer_i.obj
	link /dll /out:AtlCarServerps.dll /def:AtlCarServerps.def /entry:DllMain dlldata.obj AtlCarServer_p.obj AtlCarServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AtlCarServerps.dll
	@del AtlCarServerps.lib
	@del AtlCarServerps.exp
	@del dlldata.obj
	@del AtlCarServer_p.obj
	@del AtlCarServer_i.obj
