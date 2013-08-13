/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : XXUnknownSuperclass {
@private
	HitTestResult* _result;
	NSMutableDictionary* _cache;
	NSMutableSet* _nilValues;
	BOOL _cacheComplete;
}
+(void)initializeLookupTable;
+(void)initialize;
-(id)_isInScrollBar;
-(id)_isContentEditable;
-(id)_isLiveLink;
-(id)_textContent;
-(id)_titleDisplayString;
-(id)_targetWebFrame;
-(id)_absoluteLinkURL;
-(id)_title;
-(id)_isSelected;
-(id)_absoluteMediaURL;
-(id)_absoluteImageURL;
-(id)_imageRect;
-(id)_image;
-(id)_spellingToolTip;
-(id)_altDisplayString;
-(id)_webFrame;
-(id)_domNode;
-(id)objectForKey:(id)key;
-(id)keyEnumerator;
-(unsigned)count;
-(void)_fillCache;
-(void)finalize;
-(void)dealloc;
-(id)initWithHitTestResult:(const HitTestResult*)hitTestResult;
@end
