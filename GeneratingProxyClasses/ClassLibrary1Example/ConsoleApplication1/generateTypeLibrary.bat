echo "Batch started"

REM pushd "%ABLRoot%\AnalyzerControl\Bin\%1"
REM call "%VS100COMNTOOLS%vsvars32.bat"

call regsvcs /tlb:C:\Projects\COM\GeneratingProxyClasses\ClassLibrary1Example\ClassLibrary1Example\bin\Debug\ClassLibrary1Example.tlb C:\Projects\COM\GeneratingProxyClasses\ClassLibrary1Example\ClassLibrary1Example\bin\Debug\ClassLibrary1Example.dll
