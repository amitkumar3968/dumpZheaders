/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WMSymbolMapper : CMMapper {
@private
	unsigned short mCharacter;
	NSString* mFontName;
}
+(unsigned short)mapZapfDingbatsCharacter:(unsigned short)character;
+(unsigned short)mapWindingsCharacter:(unsigned short)character;
-(void)mapAt:(id)at withState:(id)state;
-(id)initWithWDSymbol:(id)wdsymbol parent:(id)parent;
@end

