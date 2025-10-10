#include "digital_signal.h"

namespace rza_course {
namespace week3 {

DigitalSignal::DigitalSignal(int32_t initial_value) : value_(initial_value) {}

DigitalSignal::~DigitalSignal() = default;

void DigitalSignal::ToggleValue() {
    value_ = -value_; 
}

void DigitalSignal::SetValue(int32_t value) {
  value_ = value;
}

bool DigitalSignal::IsHigh() const{
  if (value_==1){
  return true;} else{
    return false;
  }
}

int32_t DigitalSignal::GetValue() const {
  return value_;
}

}  // namespace week3
}  // namespace rza_course