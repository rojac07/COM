
ATLVersionedInterfaceServerps.dll: dlldata.obj ATLVersionedInterfaceServer_p.obj ATLVersionedInterfaceServer_i.obj
	link /dll /out:ATLVersionedInterfaceServerps.dll /def:ATLVersionedInterfaceServerps.def /entry:DllMain dlldata.obj ATLVersionedInterfaceServer_p.obj ATLVersionedInterfaceServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del ATLVersionedInterfaceServerps.dll
	@del ATLVersionedInterfaceServerps.lib
	@del ATLVersionedInterfaceServerps.exp
	@del dlldata.obj
	@del ATLVersionedInterfaceServer_p.obj
	@del ATLVersionedInterfaceServer_i.obj
