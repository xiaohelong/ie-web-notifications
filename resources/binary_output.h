// IE Web Notifications
// Copyright (C) 2015-2016, Sergei Zabolotskikh. All rights reserved.
//
// This file is a part of IE Web Notifications project.
// The use and distribution terms for this software are covered by the
// BSD 3-Clause License (https://opensource.org/licenses/BSD-3-Clause)
// which can be found in the file LICENSE at the root of this distribution.
// By using this software in any fashion, you are agreeing to be bound by
// the terms of this license. You must not remove this notice, or
// any other, from this software.

#define UKOT_PRODUCT_VERSION_MAJOR 0
#define UKOT_PRODUCT_VERSION_MINOR 9
#define UKOT_PRODUCT_VERSION_MAINT 0
#define UKOT_PRODUCT_VERSION_BUILD 0
#define UKOT_PRODUCT_VERSION UKOT_PRODUCT_VERSION_MAJOR,UKOT_PRODUCT_VERSION_MINOR,UKOT_PRODUCT_VERSION_MAINT,UKOT_PRODUCT_VERSION_BUILD

#define UKOT_VERSION_STRINGIFY_HACK(a,b,c,d) #a "." #b "." #c "." #d
#define UKOT_VERSION_STRINGIFY(a,b,c,d) UKOT_VERSION_STRINGIFY_HACK(a,b,c,d)
#define UKOT_PRODUCT_VERSION_STRING UKOT_VERSION_STRINGIFY(UKOT_PRODUCT_VERSION_MAJOR,UKOT_PRODUCT_VERSION_MINOR,UKOT_PRODUCT_VERSION_MAINT,UKOT_PRODUCT_VERSION_BUILD)

#define UKOT_AUTHOR "Sergei Zabolotskikh"
#define UKOT_PRODUCT_NAME "IE Web Notifications"
#define UKOT_FILE_NAME_STRINGIFY(x) #x
