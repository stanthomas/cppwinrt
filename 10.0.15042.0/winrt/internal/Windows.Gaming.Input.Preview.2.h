// C++ for the Windows Runtime v1.0.private
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Gaming.Input.Preview.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Gaming::Input::Preview {

struct IGameControllerProviderInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IGameControllerProviderInfoStatics>
{
    IGameControllerProviderInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
