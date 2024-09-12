#pragma once
#include "Windows.Xbox.Multiplayer.PartyChat.g.h"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.


namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    struct PartyChat
    {
        PartyChat() = default;

        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Multiplayer::PartyChatView> GetPartyChatViewAsync();
        static winrt::event_token PartyChatViewChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static void PartyChatViewChanged(winrt::event_token const& token) noexcept;
        static bool IsPartyChatActive();
        static bool IsPartyChatSuppressed();
        static void IsPartyChatSuppressed(bool value);
        static winrt::event_token IsPartyChatActiveChanged(winrt::Windows::Foundation::EventHandler<bool> const& handler);
        static void IsPartyChatActiveChanged(winrt::event_token const& token) noexcept;
        static winrt::event_token IsPartyChatSuppressedChanged(winrt::Windows::Foundation::EventHandler<bool> const& handler);
        static void IsPartyChatSuppressedChanged(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::Windows::Xbox::Multiplayer::factory_implementation
{
    struct PartyChat : PartyChatT<PartyChat, implementation::PartyChat>
    {
    };
}
