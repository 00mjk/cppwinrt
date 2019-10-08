// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#include "winrt/test_component_base.h"
namespace winrt::test_component_base::implementation
{
    template <typename D, typename... I>
    struct __declspec(empty_bases) HierarchyA_base : implements<D, test_component_base::HierarchyA, composable, I...>
    {
        using base_type = HierarchyA_base;
        using class_type = test_component_base::HierarchyA;
        using implements_type = typename HierarchyA_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"test_component_base.HierarchyA";
        }
    };
}
namespace winrt::test_component_base::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct __declspec(empty_bases) HierarchyAT : implements<D, Windows::Foundation::IActivationFactory, test_component_base::IHierarchyAFactory, I...>
    {
        using instance_type = test_component_base::HierarchyA;

        hstring GetRuntimeClassName() const
        {
            return L"test_component_base.HierarchyA";
        }
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface)
        {
            return impl::composable_factory<T>::template CreateInstance<test_component_base::HierarchyA>(baseInterface, innerInterface);
        }
        auto CreateInstance2(hstring const& name, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface)
        {
            return impl::composable_factory<T>::template CreateInstance<test_component_base::HierarchyA>(baseInterface, innerInterface, name);
        }
        [[noreturn]] Windows::Foundation::IInspectable ActivateInstance() const
        {
            throw hresult_not_implemented();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_HIERARCHYA_XAML_G_H) || __has_include("HierarchyA.xaml.g.h")
#include "HierarchyA.xaml.g.h"
#else

namespace winrt::test_component_base::implementation
{
    template <typename D, typename... I>
    using HierarchyAT = HierarchyA_base<D, I...>;
}

#endif