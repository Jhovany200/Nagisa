﻿//
// MainPage.xaml.h
// MainPage 类的声明。
//

#pragma once

#include "MainPage.g.h"
#include "XamlResources\CustomConverters.xaml.h"

namespace Nagisa
{
	using Assassin::TransferManager;
	using Platform::Object;
	using Platform::String;
	using Windows::UI::Xaml::RoutedEventArgs;
	using Windows::UI::Xaml::Controls::AutoSuggestBox;
	using Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs;
	using Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs;

	public ref class MainPage sealed
	{
	public:
		MainPage();
	internal:
		TransferManager ^ m_TransferManager = nullptr;
	private:
		void RefreshTaskList();
		void SearchTaskList(
			String^ SearchFilter);

		void AboutButton_Click(
			Object^ sender,
			RoutedEventArgs^ e);
		void NewTaskButton_Click(
			Object^ sender,
			RoutedEventArgs^ e);
		void Page_Loaded(
			Object^ sender,
			RoutedEventArgs^ e);
		void CopyLinkMenuItem_Click(
			Object^ sender,
			RoutedEventArgs^ e);
		void SearchAutoSuggestBox_QuerySubmitted(
			AutoSuggestBox^ sender,
			AutoSuggestBoxQuerySubmittedEventArgs^ args);
		void SearchAutoSuggestBox_TextChanged(
			AutoSuggestBox^ sender, 
			AutoSuggestBoxTextChangedEventArgs^ args);
		void RetryButton_Click(
			Object^ sender, 
			RoutedEventArgs^ e);
		void ResumeButton_Click(
			Object^ sender, 
			RoutedEventArgs^ e);
		void PauseButton_Click(
			Object^ sender, 
			RoutedEventArgs^ e);
		void TaskItemCancelMenuItem_Click(
			Object^ sender,
			RoutedEventArgs^ e);
		void TaskItemRemoveMenuItem_Click(
			Object^ sender, 
			RoutedEventArgs^ e);
		void TaskItemOpenFolderMenuItem_Click(
			Object^ sender,
			RoutedEventArgs^ e);
	};
}
