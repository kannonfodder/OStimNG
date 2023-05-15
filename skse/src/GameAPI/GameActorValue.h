#pragma once

namespace GameAPI {
    struct GameActorValue {
        inline static GameActorValue fromString(std::string actorValue) {
            return RE::ActorValueList::GetSingleton()->LookupActorValueByName(actorValue);
        }

        RE::ActorValue actorValue;

        inline GameActorValue(RE::ActorValue actorValue) : actorValue{actorValue} {}

        inline operator bool() const { return actorValue != RE::ActorValue::kNone; }
        inline bool operator==(const GameActorValue other) { return actorValue == other.actorValue; }
        inline bool operator!=(const GameActorValue other) { return actorValue != other.actorValue; }
    };
}