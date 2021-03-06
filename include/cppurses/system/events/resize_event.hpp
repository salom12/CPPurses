#ifndef SYSTEM_EVENTS_RESIZE_EVENT_HPP
#define SYSTEM_EVENTS_RESIZE_EVENT_HPP
#include <cstddef>

#include <cppurses/system/event.hpp>
#include <cppurses/widget/area.hpp>

namespace cppurses {
class Event_handler;

class Resize_event : public Event {
   public:
    Resize_event(Event_handler* receiver,
                 Area new_size,
                 Area old_size = Area{0, 0});

    bool send() const override;
    bool filter_send(Event_handler* filter) const override;

   protected:
    Area new_size_;
    Area old_size_;
};

}  // namespace cppurses
#endif  // SYSTEM_EVENTS_RESIZE_EVENT_HPP
