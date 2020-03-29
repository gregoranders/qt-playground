#pragma once
#ifndef TYPES_HPP
#define TYPES_HPP

#include <cstdlib>
#include <iostream>
#include <sstream>

#define TYPES_DISABLE_COPY(Clazz)                                                                                      \
  Clazz(const Clazz &) = delete;                                                                                       \
  Clazz &operator=(const Clazz &) = delete;

#define TYPES_DISABLE_MOVE(Clazz)                                                                                      \
  Clazz(Clazz &&) = delete;                                                                                            \
  Clazz &operator=(Clazz &&) = delete;

#define TYPES_DISABLE_COPY_MOVE(Clazz)                                                                                 \
  TYPES_DISABLE_COPY(Clazz)                                                                                            \
  TYPES_DISABLE_MOVE(Clazz)

#endif // TYPES_HPP
