
AnotherAtlCarServerps.dll: dlldata.obj AnotherAtlCarServer_p.obj AnotherAtlCarServer_i.obj
	link /dll /out:AnotherAtlCarServerps.dll /def:AnotherAtlCarServerps.def /entry:DllMain dlldata.obj AnotherAtlCarServer_p.obj AnotherAtlCarServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AnotherAtlCarServerps.dll
	@del AnotherAtlCarServerps.lib
	@del AnotherAtlCarServerps.exp
	@del dlldata.obj
	@del AnotherAtlCarServer_p.obj
	@del AnotherAtlCarServer_i.obj
