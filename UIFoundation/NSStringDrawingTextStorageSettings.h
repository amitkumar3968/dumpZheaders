/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSStringDrawingTextStorageSettings : XXUnknownSuperclass {
@private
	struct {
		float _hyphenationFactor;
		struct {
			unsigned usesFontLeading : 1;
			unsigned usesScreenFonts : 1;
			unsigned showsInvisibleCharacters : 1;
			unsigned showsControlCharacters : 1;
			unsigned defaultAttachmentScaling : 4;
			unsigned typesetterBehavior : 8;
			unsigned reserved : 20;
		} _flags;
	} _settings;
}
+(id)threadSpecificStringDrawingTextStorageSettings:(BOOL)settings;
@end

