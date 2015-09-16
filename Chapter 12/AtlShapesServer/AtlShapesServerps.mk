
AtlShapesServerps.dll: dlldata.obj AtlShapesServer_p.obj AtlShapesServer_i.obj
	link /dll /out:AtlShapesServerps.dll /def:AtlShapesServerps.def /entry:DllMain dlldata.obj AtlShapesServer_p.obj AtlShapesServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AtlShapesServerps.dll
	@del AtlShapesServerps.lib
	@del AtlShapesServerps.exp
	@del dlldata.obj
	@del AtlShapesServer_p.obj
	@del AtlShapesServer_i.obj
