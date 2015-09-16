
AtlComErrorServerps.dll: dlldata.obj AtlComErrorServer_p.obj AtlComErrorServer_i.obj
	link /dll /out:AtlComErrorServerps.dll /def:AtlComErrorServerps.def /entry:DllMain dlldata.obj AtlComErrorServer_p.obj AtlComErrorServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AtlComErrorServerps.dll
	@del AtlComErrorServerps.lib
	@del AtlComErrorServerps.exp
	@del dlldata.obj
	@del AtlComErrorServer_p.obj
	@del AtlComErrorServer_i.obj
