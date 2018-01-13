﻿#pragma once

#include "TransferTask.h"

namespace Assassin
{
	using Platform::String;
	using Platform::Collections::Vector;
	using Windows::Foundation::IAsyncOperation;
	using Windows::Foundation::Uri;
	using Windows::Foundation::Collections::IVectorView;
	using Windows::Networking::BackgroundTransfer::BackgroundDownloader;
	using Windows::Storage::IStorageFile;

	using ITransferTaskVector = IVectorView<ITransferTask^>;

	public interface class ITransferManager
	{
		property String^ Version
		{
			String^ get();
		}

		property String^ SearchFilter;

		IAsyncOperation<ITransferTaskVector^>^ GetTasksAsync();

		void AddTask(Uri^ SourceUri, IStorageFile^ DestinationFile);
	};
	
	public ref class TransferManager sealed : public ITransferManager
	{
	private:
		BackgroundDownloader^ m_Downloader = nullptr;
		Vector<ITransferTask^>^ m_TaskList = nullptr;

		M2::CThread m_UpdateThread;

	public:
		TransferManager();
		virtual ~TransferManager();

		virtual property String^ Version
		{
			String^ get();
		}

		virtual property String^ SearchFilter;

		virtual IAsyncOperation<ITransferTaskVector^>^ GetTasksAsync();

		virtual void AddTask(Uri^ SourceUri, IStorageFile^ DestinationFile);

	};
}
