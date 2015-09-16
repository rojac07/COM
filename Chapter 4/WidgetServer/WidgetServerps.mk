
WidgetServerps.dll: dlldata.obj WidgetServer_p.obj WidgetServer_i.obj
	link /dll /out:WidgetServerps.dll /def:WidgetServerps.def /entry:DllMain dlldata.obj WidgetServer_p.obj WidgetServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del WidgetServerps.dll
	@del WidgetServerps.lib
	@del WidgetServerps.exp
	@del dlldata.obj
	@del WidgetServer_p.obj
	@del WidgetServer_i.obj
