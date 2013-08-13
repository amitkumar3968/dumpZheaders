/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebKit-Structs.h"

@class WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject {
@private
	WebBackForwardListPrivate* _private;
}
@property(assign) unsigned pageCacheSize;	// converted property
@property(assign) int capacity;	// converted property
+(void)initialize;
-(id)itemAtIndex:(int)index;
-(int)forwardListCount;
-(int)backListCount;
// converted property getter: -(unsigned)pageCacheSize;
// converted property setter: -(void)setPageCacheSize:(unsigned)size;
-(id)description;
// converted property setter: -(void)setCapacity:(int)capacity;
// converted property getter: -(int)capacity;
-(id)forwardListWithLimit:(int)limit;
-(id)backListWithLimit:(int)limit;
-(id)forwardItem;
-(id)currentItem;
-(id)backItem;
-(void)goToItem:(id)item;
-(void)goForward;
-(void)goBack;
-(BOOL)containsItem:(id)item;
-(void)setToMatchDictionaryRepresentation:(id)matchDictionaryRepresentation;
-(id)dictionaryRepresentation;
-(void)removeItem:(id)item;
-(void)addItem:(id)item;
-(void)_close;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)initWithBackForwardList:(PassRefPtr<WebCore::BackForwardListImpl>)backForwardList;
@end

