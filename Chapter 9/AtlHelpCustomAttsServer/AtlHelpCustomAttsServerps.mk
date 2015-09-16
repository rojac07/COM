
AtlHelpCustomAttsServerps.dll: dlldata.obj AtlHelpCustomAttsServer_p.obj AtlHelpCustomAttsServer_i.obj
	link /dll /out:AtlHelpCustomAttsServerps.dll /def:AtlHelpCustomAttsServerps.def /entry:DllMain dlldata.obj AtlHelpCustomAttsServer_p.obj AtlHelpCustomAttsServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AtlHelpCustomAttsServerps.dll
	@del AtlHelpCustomAttsServerps.lib
	@del AtlHelpCustomAttsServerps.exp
	@del dlldata.obj
	@del AtlHelpCustomAttsServer_p.obj
	@del AtlHelpCustomAttsServer_i.obj
