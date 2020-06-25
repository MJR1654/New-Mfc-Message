; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CAaDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Aa.h"

ClassCount=4
Class1=CAaApp
Class2=CAaDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_AA_DIALOG

[CLS:CAaApp]
Type=0
HeaderFile=Aa.h
ImplementationFile=Aa.cpp
Filter=N

[CLS:CAaDlg]
Type=0
HeaderFile=AaDlg.h
ImplementationFile=AaDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=AaDlg.h
ImplementationFile=AaDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_AA_DIALOG]
Type=1
Class=CAaDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BUTTONSEND,button,1342242816

