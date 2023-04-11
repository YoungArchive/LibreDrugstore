// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "RootPage.xaml.h"
#if __has_include("RootPage.g.cpp")
#include "RootPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::LibreDrugstore::implementation
{
    RootPage::RootPage()
    {
        InitializeComponent();
    }

    int32_t RootPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void RootPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void RootPage::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
