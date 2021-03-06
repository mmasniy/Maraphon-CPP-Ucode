#pragma once
#include <string>
#include "ILockable.h"
#include "IOpenable.h"
#include "LockpickDificulty.h"

class Container : public ILockable, public IOpenable {
    public:
    Container(bool isLocked, const LockpickDifficulty difficulty);
    LockpickDifficulty lockDifficulty() const;
    bool isLocked() const;
    bool tryToOpen(LockpickDifficulty skill);
    virtual std::string name() const = 0;
    private:
    bool m_isLocked{false};
    LockpickDifficulty m_difficulty;
};
