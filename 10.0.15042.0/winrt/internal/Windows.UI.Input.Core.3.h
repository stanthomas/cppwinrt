// C++ for the Windows Runtime v1.0.private
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Input.Core.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Input::Core {

struct WINRT_EBO RadialControllerIndependentInputSource :
    Windows::UI::Input::Core::IRadialControllerIndependentInputSource
{
    RadialControllerIndependentInputSource(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Core::RadialControllerIndependentInputSource CreateForView(const Windows::ApplicationModel::Core::CoreApplicationView & view);
};

}

}
