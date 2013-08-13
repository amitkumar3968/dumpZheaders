/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3MusicLibrary_SortMapEntry : NSObject {
@private
	long long _nameOrder;
	NSString* _name;
	NSData* _sortKey;
	int _nameSection;
}
-(void).cxx_destruct;
-(id)description;
-(id)initWithName:(id)name nameSection:(int)section sortKey:(id)key;
-(id)initWithName:(id)name nameSection:(int)section sortKey:(id)key nameOrder:(long long)order;
@end
