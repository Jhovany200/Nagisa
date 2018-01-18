﻿# Nagisa - Changelog

## Notice
- This is the changelog about project Nagisa.
- For more information on the names of persons mentioned here, please read 
  People.md.

## Changelog

**Nagisa 0.2 [Build 12]**
- Update documents.

**Nagisa 0.2 [Build 11]**
- Improve the implemention of "About" UI.
- Improve the constructor of TransferManager class.
- Improve the UI notify timer of TransferManager class.
- Fix a bug for TransferManager class.
- Add M2CreateGuid function.

### Nagisa 0.1 [Build 10]
**New Features**
- Supported Transfer Protocols: HTTP, HTTPS, FTP, FTPS, WebSocket and WebSocket
  Secure.
- Muitl-language Support: English and Simplified Chinese.
- Support background download. 
  (Temporarily Based on Windows.Networking.BackgroundTransfer)
- Support resume broken/dead downloads.
  (Temporarily Based on Windows.Networking.BackgroundTransfer)
- Support single-threaded multi-tasking download.
  (Temporarily Based on Windows.Networking.BackgroundTransfer)
- Support for searching tasks from the task list.
- The color themes of Nagisa follows the options in Windows Settings.

**Added APIs**
- Assassin
  - TransferManager class or ITransferManager interface.
    - Version property.
	- SearchFilter property.
	- GetTasksAsync method.
	- AddTask method.
  - TransferTaskStatus enum.
  - ITransferTask interface.
    - RequestedUri property.
	- ResultFile property.
	- Status property.
	- BytesReceived property.
	- BytesReceivedSpeed property.
	- RemainTime property.
	- TotalBytesToReceive property.
	- Pause method.
	- Resume method.
	- CancelAsync method.
	- NotifyPropertyChanged method.
- M2-Team Common Library
  - M2RemoveReference trait.
  - M2AsyncSetCompletedHandler function.
  - M2AsyncSetProgressHandler function.
  - M2AsyncWait function.
  - M2ExecuteOnUIThread function.
  - IM2AsyncController interface.
  - IM2AsyncControllerEx interface.
  - M2AsyncCreate function.
  - M2GetInspectable function.
  - M2ThrowPlatformException function.
  - M2ThrowPlatformExceptionIfFailed function.
  - M2ThrownPlatformExceptionToHResult function.
  - M2FindSubString function.
  - M2ConvertByteSizeToString function.
  - M2FormatString function.
  - M2GetTickCount function.
  - M2PathFindFileName function.
  - M2::CThread class.
  - M2::CObject template.
  - M2::CHandle class.
  - M2::CComObject class.
- XAML
  - Uint64ToDoubleConverter converter.
  - Uint64ByteSizeToStringConverter converter.
  - StorageFileToFileNameConverter converter.
  - TaskStatusToVisibleConverter converter.
  - Uint64RemainTimeToStringConverter converter.
  - TaskListEmptyToVisibilityConverter converter.
  - CustomContentDialogStyle style.
  - CustomIconButtonStyle style.
  - CustomListViewItemStyle style.
