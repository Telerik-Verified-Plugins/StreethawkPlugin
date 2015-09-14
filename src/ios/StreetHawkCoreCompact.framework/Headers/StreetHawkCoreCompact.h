/*
 * Copyright (c) StreetHawk, All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.
 */

#import <UIKit/UIKit.h>

//! Project version number for StreetHawkCoreCompact.
FOUNDATION_EXPORT double StreetHawkCoreCompactVersionNumber;

//! Project version string for StreetHawkCoreCompact.
FOUNDATION_EXPORT const unsigned char StreetHawkCoreCompactVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <StreetHawkCoreCompact/PublicHeader.h>

//Core
//  Internal
#import <StreetHawkCoreCompact/SHAlertView.h> //can be private, but sample App use it.
#import <StreetHawkCoreCompact/SHInstall.h>
#import <StreetHawkCoreCompact/SHInstallHandler.h>
#import <StreetHawkCoreCompact/SHLogger.h>
#import <StreetHawkCoreCompact/SHObject.h>
#import <StreetHawkCoreCompact/SHRequest.h>
#import <StreetHawkCoreCompact/SHUtils.h>
#import <StreetHawkCoreCompact/SHViewController.h>
//  Publish
#import <StreetHawkCoreCompact/PushDataForApplication.h>
#import <StreetHawkCoreCompact/SHApp.h>
#import <StreetHawkCoreCompact/SHBaseViewController.h>
#import <StreetHawkCoreCompact/SHFriendlyNameObject.h>
#import <StreetHawkCoreCompact/SHTypes.h>

//Crash
//  Internal
#import <StreetHawkCoreCompact/SHCrashHandler.h>
//  Publish
#import <StreetHawkCoreCompact/SHApp+Crash.h>

//Feed
//  Publish
#import <StreetHawkCoreCompact/SHFeedObject.h>
#import <StreetHawkCoreCompact/SHApp+Feed.h>

//Growth
//  Publish
#import <StreetHawkCoreCompact/SHApp+Growth.h>

//Location
//  Internal
#import <StreetHawkCoreCompact/SHLocationManager.h>
//  Publish
#import <StreetHawkCoreCompact/SHApp+Location.h>

//Notification
//  Internal
#import <StreetHawkCoreCompact/SHAlertSettingsViewController.h> //can be private, but sample App use it.
#import <StreetHawkCoreCompact/SHNotificationHandler.h>
#import <StreetHawkCoreCompact/SHSlideViewController.h> //can be private, but sample App use it.
//  Publish
#import <StreetHawkCoreCompact/ISHCustomiseHandler.h>
#import <StreetHawkCoreCompact/ISHPhonegapObserver.h>
#import <StreetHawkCoreCompact/SHApp+Notification.h>
