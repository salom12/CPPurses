#ifndef SYSTEM_EVENTS_HIDE_EVENT_HPP
#define SYSTEM_EVENTS_HIDE_EVENT_HPP
#include <cppurses/system/event.hpp>

namespace cppurses {
class Event_handler;

class Hide_event : public Event {
   public:
    explicit Hide_event(Event_handler* receiver);
    bool send() const override;
    bool filter_send(Event_handler* filter) const override;
};

}  // namespace cppurses
#endif  // SYSTEM_EVENTS_HIDE_EVENT_HPP
