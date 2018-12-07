echo ; > %TEMP%\blank.sc
echo %LOCALAPPDATA%\Microsoft\AppV\Client\Integration\F983517E-71DA-4BF3-8049-59DECBE31D02\Root\VFS\AppVPackageDrive\Scite\SciTE.exe > %TEMP%\scite.sc
copy /Y ""%LOCALAPPDATA%\Microsoft\AppV\Client\Integration\F983517E-71DA-4BF3-8049-59DECBE31D02\Root\mingwvars.bat"" + %TEMP%\blank.sc + %TEMP%\scite.sc %TEMP%\scitestart.bat
cmd /C %TEMP%\scitestart.bat  /appvve:F983517E-71DA-4BF3-8049-59DECBE31D02_FB3448B6-2C9A-4EF0-A03B-5B9A760AF506

