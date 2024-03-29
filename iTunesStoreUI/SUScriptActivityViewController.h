/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptViewController.h"

@class NSArray, NSString;

@interface SUScriptActivityViewController : SUScriptViewController {
@private
	NSArray* _applicationActivities;
	NSArray* _providers;
}
@property(readonly, assign) NSString* activityTypeSaveToCameraRoll;
@property(readonly, assign) NSString* activityTypePrint;
@property(readonly, assign) NSString* activityTypePostToWeibo;
@property(readonly, assign) NSString* activityTypePostToTwitter;
@property(readonly, assign) NSString* activityTypePostToFacebook;
@property(readonly, assign) NSString* activityTypeMessage;
@property(readonly, assign) NSString* activityTypeMail;
@property(readonly, assign) NSString* activityTypeCopyToPasteboard;
@property(readonly, assign) NSString* activityTypeAssignToContact;
@property(copy) id excludedActivityTypes;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
// declared property getter: -(id)activityTypeSaveToCameraRoll;
// declared property getter: -(id)activityTypePrint;
// declared property getter: -(id)activityTypePostToWeibo;
// declared property getter: -(id)activityTypePostToTwitter;
// declared property getter: -(id)activityTypePostToFacebook;
// declared property getter: -(id)activityTypeMessage;
// declared property getter: -(id)activityTypeMail;
// declared property getter: -(id)activityTypeCopyToPasteboard;
// declared property getter: -(id)activityTypeAssignToContact;
// declared property setter: -(void)setExcludedActivityTypes:(id)types;
// declared property getter: -(id)excludedActivityTypes;
-(id)_className;
-(void)setTitle:(id)title forActivityType:(id)activityType;
-(id)newNativeViewController;
-(void)dealloc;
-(id)initWithScriptItemProviders:(id)scriptItemProviders applicationActivities:(id)activities;
@end

