# Microsoft Developer Studio Project File - Name="StegMed" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=StegMed - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "StegMed.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "StegMed.mak" CFG="StegMed - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "StegMed - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "StegMed - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "StegMed - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /o /win32 "NUL"
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /o /win32 "NUL"
# ADD BASE RSC /l 0x2c0a /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x2c0a /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "StegMed - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MDd /W3 /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /o /win32 "NUL"
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /o /win32 "NUL"
# ADD BASE RSC /l 0x2c0a /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x2c0a /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "StegMed - Win32 Release"
# Name "StegMed - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\Dialogo2A.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo2B.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo3A.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo3B.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A1.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A2.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A3.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A4.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A5.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A6.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo4B.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo5A.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo5B.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo6A.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo7A.cpp
# End Source File
# Begin Source File

SOURCE=.\Dialogo8A.cpp
# End Source File
# Begin Source File

SOURCE=.\Info1.cpp
# End Source File
# Begin Source File

SOURCE=.\Info10.cpp
# End Source File
# Begin Source File

SOURCE=.\Info11.cpp
# End Source File
# Begin Source File

SOURCE=.\Info12.cpp
# End Source File
# Begin Source File

SOURCE=.\Info131.cpp
# End Source File
# Begin Source File

SOURCE=.\Info14.cpp
# End Source File
# Begin Source File

SOURCE=.\Info2.cpp
# End Source File
# Begin Source File

SOURCE=.\Info3.cpp
# End Source File
# Begin Source File

SOURCE=.\Info4.cpp
# End Source File
# Begin Source File

SOURCE=.\Info5.cpp
# End Source File
# Begin Source File

SOURCE=.\Info6.cpp
# End Source File
# Begin Source File

SOURCE=.\Info7.cpp
# End Source File
# Begin Source File

SOURCE=.\Info8.cpp
# End Source File
# Begin Source File

SOURCE=.\Info9.cpp
# End Source File
# Begin Source File

SOURCE=.\SplashDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\StegMed.cpp
# End Source File
# Begin Source File

SOURCE=.\StegMed.rc
# End Source File
# Begin Source File

SOURCE=.\StegMedDlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\Afxres.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo2A.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo2B.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo3A.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo3B.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A1.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A2.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A3.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A4.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A5.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo4A6.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo4B.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo5A.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo5B.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo6A.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo7A.h
# End Source File
# Begin Source File

SOURCE=.\Dialogo8A.h
# End Source File
# Begin Source File

SOURCE=.\Info1.h
# End Source File
# Begin Source File

SOURCE=.\Info10.h
# End Source File
# Begin Source File

SOURCE=.\Info11.h
# End Source File
# Begin Source File

SOURCE=.\Info12.h
# End Source File
# Begin Source File

SOURCE=.\Info131.h
# End Source File
# Begin Source File

SOURCE=.\Info14.h
# End Source File
# Begin Source File

SOURCE=.\Info2.h
# End Source File
# Begin Source File

SOURCE=.\Info3.h
# End Source File
# Begin Source File

SOURCE=.\Info4.h
# End Source File
# Begin Source File

SOURCE=.\Info5.h
# End Source File
# Begin Source File

SOURCE=.\Info6.h
# End Source File
# Begin Source File

SOURCE=.\Info7.h
# End Source File
# Begin Source File

SOURCE=.\Info8.h
# End Source File
# Begin Source File

SOURCE=.\Info9.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\SplashDialog.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\StegMed.h
# End Source File
# Begin Source File

SOURCE=.\StegMedDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;cnt;rtf;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\about.bmp
# End Source File
# Begin Source File

SOURCE=.\res\about2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\aceptard.bmp
# End Source File
# Begin Source File

SOURCE=.\res\aceptarf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\aceptaru.bmp
# End Source File
# Begin Source File

SOURCE=.\res\atrasd.bmp
# End Source File
# Begin Source File

SOURCE=.\res\atrasf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\atrasu.bmp
# End Source File
# Begin Source File

SOURCE=.\res\cancelard.bmp
# End Source File
# Begin Source File

SOURCE=.\res\cancelarf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\cancelaru.bmp
# End Source File
# Begin Source File

SOURCE=.\res\comenzard.bmp
# End Source File
# Begin Source File

SOURCE=.\res\comenzarf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\comenzaru.bmp
# End Source File
# Begin Source File

SOURCE=.\res\corregird.bmp
# End Source File
# Begin Source File

SOURCE=.\res\corregirf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\corregiru.bmp
# End Source File
# Begin Source File

SOURCE=.\res\examinard.bmp
# End Source File
# Begin Source File

SOURCE=.\res\examinarf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\examinaru.bmp
# End Source File
# Begin Source File

SOURCE=.\res\exclam.ico
# End Source File
# Begin Source File

SOURCE=.\res\fondo.bmp
# End Source File
# Begin Source File

SOURCE=.\res\icon2.ico
# End Source File
# Begin Source File

SOURCE=.\res\informac.ico
# End Source File
# Begin Source File

SOURCE=.\res\mostrard.bmp
# End Source File
# Begin Source File

SOURCE=.\res\mostrarf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\mostraru.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ocultard.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ocultarf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\ocultaru.bmp
# End Source File
# Begin Source File

SOURCE=.\res\question.ico
# End Source File
# Begin Source File

SOURCE=.\res\rescatard.bmp
# End Source File
# Begin Source File

SOURCE=.\res\rescatarf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\rescataru.bmp
# End Source File
# Begin Source File

SOURCE=.\res\siguiented.bmp
# End Source File
# Begin Source File

SOURCE=.\res\siguientef.bmp
# End Source File
# Begin Source File

SOURCE=.\res\siguienteu.bmp
# End Source File
# Begin Source File

SOURCE=.\res\siguientex.bmp
# End Source File
# Begin Source File

SOURCE=.\res\StegMed.bmp
# End Source File
# Begin Source File

SOURCE=.\res\StegMed.ico
# End Source File
# Begin Source File

SOURCE=.\StegMed.ico
# End Source File
# Begin Source File

SOURCE=.\res\StegMed.rc2
# End Source File
# Begin Source File

SOURCE=.\res\StegMed2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\StegMed_fondo.bmp
# End Source File
# Begin Source File

SOURCE=.\res\stop.ico
# End Source File
# Begin Source File

SOURCE=.\res\terminard.bmp
# End Source File
# Begin Source File

SOURCE=.\res\terminarf.bmp
# End Source File
# Begin Source File

SOURCE=.\res\terminaru.bmp
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
