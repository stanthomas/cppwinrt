// C++ for the Windows Runtime v1.0.private
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Preview.Holographic.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Preview::Holographic {

struct HolographicApplicationPreview
{
    HolographicApplicationPreview() = delete;
    static bool IsCurrentViewPresentedOnHolographicDisplay();
    static bool IsHolographicActivation(const Windows::ApplicationModel::Activation::IActivatedEventArgs & activatedEventArgs);
};

}

}
