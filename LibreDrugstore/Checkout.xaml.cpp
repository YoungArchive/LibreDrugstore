// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "Checkout.xaml.h"
#if __has_include("Checkout.g.cpp")
#include "Checkout.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::LibreDrugstore::implementation
{
    Checkout::Checkout()
    {
        InitializeComponent();
    }

    int32_t Checkout::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Checkout::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Checkout::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
