// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "item_list.hpp"
#include "sort_order.hpp"
#include <memory>

namespace textsort {

class TextboxListener;

class SortItems {
public:
    virtual ~SortItems() {}

    /** For the iOS / Android demo */
    virtual void sort(sort_order order, const ItemList & items) = 0;

    static std::shared_ptr<SortItems> create_with_listener(const std::shared_ptr<TextboxListener> & listener);

    /** For the localhost / command-line demo */
    static ItemList run_sort(const ItemList & items);
};

}  // namespace textsort
