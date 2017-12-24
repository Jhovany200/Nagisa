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
	using Assassin::TransferTask;
	using Platform::Object;
	using Platform::Collections::Vector;
	using Windows::UI::Xaml::RoutedEventArgs;

	public ref class MainPage sealed
	{
	public:
		MainPage();
	internal:
		TransferManager ^ m_TransferManager = nullptr;
	private:
		void AboutButtonClick(Object^ sender, RoutedEventArgs^ e);
		void NewTaskButtonClick(Object^ sender, RoutedEventArgs^ e);
		void Page_Loaded(Object^ sender, RoutedEventArgs^ e);
		void CopyLinkMenuItem_Click(Object^ sender, RoutedEventArgs^ e);
	};
}
