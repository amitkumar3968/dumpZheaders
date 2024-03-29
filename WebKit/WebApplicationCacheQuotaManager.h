/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebQuotaManager.h"

@class WebSecurityOrigin;

__attribute__((visibility("hidden")))
@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {
@private
	WebSecurityOrigin* _origin;
}
@property(assign) unsigned long long quota;	// converted property
@property(readonly, retain) WebSecurityOrigin* origin;	// converted property
// converted property setter: -(void)setQuota:(unsigned long long)quota;
// converted property getter: -(unsigned long long)quota;
-(unsigned long long)usage;
// converted property getter: -(id)origin;
-(id)initWithOrigin:(id)origin;
@end

