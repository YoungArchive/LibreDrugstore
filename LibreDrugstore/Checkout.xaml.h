// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "Checkout.g.h"

namespace winrt::LibreDrugstore::implementation
{
    struct Checkout : CheckoutT<Checkout>
    {
        Checkout();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::LibreDrugstore::factory_implementation
{
    struct Checkout : CheckoutT<Checkout, implementation::Checkout>
    {
    };
}
