/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView;

@interface ASMailFolderCell : XXUnknownSuperclass {
	UILabel* _mailFolderText;
	UIImageView* _mailFolderIcon;
	unsigned _level;
}
@property(assign, getter=isChecked) BOOL checked;	// converted property
+(float)mtcOffsetForLevel:(int)level;
+(id)_iconFromBundle:(id)bundle forASFolderType:(int)asfolderType nested:(BOOL)nested;
+(int)_mailboxUidTypeForASFolderType:(int)asfolderType;
+(int)_cacheIndexForType:(int)type nested:(BOOL)nested;
-(void)dealloc;
-(void)layoutSubviews;
// converted property setter: -(void)setChecked:(BOOL)checked;
// converted property getter: -(BOOL)isChecked;
-(void)setEnabled:(BOOL)enabled;
-(void)setMailFolder:(id)folder withIndent:(unsigned)indent;
-(void)_setupMailFolderIconForImage:(id)image;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
