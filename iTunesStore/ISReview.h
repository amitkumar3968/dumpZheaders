/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSURL, NSString;

@interface ISReview : XXUnknownSuperclass <NSCoding, NSCopying> {
	int _assetType;
	NSString* _body;
	unsigned _bodyMaxLength;
	NSURL* _infoURL;
	unsigned long long _itemIdentifier;
	NSString* _nickname;
	BOOL _nicknameIsConfirmed;
	unsigned _nicknameMaxLength;
	float _rating;
	NSURL* _submitURL;
	NSString* _title;
	unsigned _titleMaxLength;
}
@property(assign, nonatomic) unsigned titleMaxLength;	// @synthesize=_titleMaxLength
@property(assign, nonatomic) unsigned nicknameMaxLength;	// @synthesize=_nicknameMaxLength
@property(assign, nonatomic) BOOL nicknameIsConfirmed;	// @synthesize=_nicknameIsConfirmed
@property(assign, nonatomic) unsigned bodyMaxLength;	// @synthesize=_bodyMaxLength
@property(retain, nonatomic) NSURL* submitURL;	// @synthesize=_submitURL
@property(retain, nonatomic) NSURL* infoURL;	// @synthesize=_infoURL
@property(assign, nonatomic) unsigned long long itemIdentifier;	// @synthesize=_itemIdentifier
@property(assign, nonatomic) int assetType;	// @synthesize=_assetType
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
@property(assign, nonatomic) float rating;	// @synthesize=_rating
@property(retain, nonatomic) NSString* nickname;	// @synthesize=_nickname
@property(retain, nonatomic) NSString* body;	// @synthesize=_body
@property(readonly, assign, nonatomic) BOOL hasSavedDraft;
// declared property setter: -(void)setTitleMaxLength:(unsigned)length;
// declared property getter: -(unsigned)titleMaxLength;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setSubmitURL:(id)url;
// declared property getter: -(id)submitURL;
// declared property setter: -(void)setRating:(float)rating;
// declared property getter: -(float)rating;
// declared property setter: -(void)setNicknameMaxLength:(unsigned)length;
// declared property getter: -(unsigned)nicknameMaxLength;
// declared property setter: -(void)setNicknameIsConfirmed:(BOOL)confirmed;
// declared property getter: -(BOOL)nicknameIsConfirmed;
// declared property setter: -(void)setNickname:(id)nickname;
// declared property getter: -(id)nickname;
// declared property setter: -(void)setItemIdentifier:(unsigned long long)identifier;
// declared property getter: -(unsigned long long)itemIdentifier;
// declared property setter: -(void)setInfoURL:(id)url;
// declared property getter: -(id)infoURL;
// declared property setter: -(void)setBodyMaxLength:(unsigned)length;
// declared property getter: -(unsigned)bodyMaxLength;
// declared property setter: -(void)setBody:(id)body;
// declared property getter: -(id)body;
// declared property setter: -(void)setAssetType:(int)type;
// declared property getter: -(int)assetType;
-(id)_draftsDirectoryPath;
-(id)_draftFileName;
-(BOOL)saveAsDraft;
-(BOOL)restoreFromDraft;
-(BOOL)removeDraft;
-(void)mergeWithReview:(id)review preferLocalValues:(BOOL)values;
-(void)loadFromDictionary:(id)dictionary;
// declared property getter: -(BOOL)hasSavedDraft;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
@end

