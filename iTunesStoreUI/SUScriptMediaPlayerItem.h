/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class SUMediaPlayerItem, NSNumber, NSString;

@interface SUScriptMediaPlayerItem : SUScriptObject {
@private
	SUMediaPlayerItem* _mediaItem;
}
@property(copy) NSString* URL;
@property(copy) NSString* title;
@property(copy) NSString* subtitle;
@property(retain) NSNumber* playableDuration;
@property(copy) NSString* itemType;
@property(retain) NSNumber* itemIdentifier;
@property(copy) NSString* initialOrientation;
@property(copy) NSString* bookmarkIdentifier;
@property(copy) NSString* backgroundImageURL;
+(id)webScriptNameForKey:(const char*)key;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
// declared property getter: -(id)URL;
// declared property getter: -(id)title;
// declared property getter: -(id)subtitle;
// declared property setter: -(void)setURL:(id)url;
// declared property setter: -(void)setTitle:(id)title;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property setter: -(void)setPlayableDuration:(id)duration;
// declared property setter: -(void)setItemType:(id)type;
// declared property setter: -(void)setItemIdentifier:(id)identifier;
// declared property setter: -(void)setInitialOrientation:(id)orientation;
// declared property setter: -(void)setBookmarkIdentifier:(id)identifier;
// declared property setter: -(void)setBackgroundImageURL:(id)url;
// declared property getter: -(id)playableDuration;
// declared property getter: -(id)itemType;
// declared property getter: -(id)itemIdentifier;
// declared property getter: -(id)initialOrientation;
-(id)_className;
// declared property getter: -(id)bookmarkIdentifier;
// declared property getter: -(id)backgroundImageURL;
-(id)copyNativeMediaPlayerItem;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
@end
