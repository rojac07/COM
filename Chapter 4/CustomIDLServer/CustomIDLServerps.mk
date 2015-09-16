
CustomIDLServerps.dll: dlldata.obj CustomIDLServer_p.obj CustomIDLServer_i.obj
	link /dll /out:CustomIDLServerps.dll /def:CustomIDLServerps.def /entry:DllMain dlldata.obj CustomIDLServer_p.obj CustomIDLServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del CustomIDLServerps.dll
	@del CustomIDLServerps.lib
	@del CustomIDLServerps.exp
	@del dlldata.obj
	@del CustomIDLServer_p.obj
	@del CustomIDLServer_i.obj
