//
//  factories.hpp
//  EnTT Pacman
//
//  Created by Indi Kernick on 18/9/18.
//  Copyright © 2018 Indi Kernick. All rights reserved.
//

#ifndef CORE_FACTORIES_HPP
#define CORE_FACTORIES_HPP

#include "util/registry.hpp"
#include <Simpleton/Sprite/sheet.hpp>

// You typically don't need to store the entity ID after making an entity.
// Sometimes you do so it's probably a good idea to return the entity ID
// just in case you need it later.

Entity makePlayer(Registry &, const Sprite::Sheet &);
Entity makeBlinky(Registry &, const Sprite::Sheet &, Entity);
Entity makePinky(Registry &, const Sprite::Sheet &, Entity);
Entity makeInky(Registry &, const Sprite::Sheet &, Entity, Entity);
Entity makeClyde(Registry &, const Sprite::Sheet &, Entity);

#endif
