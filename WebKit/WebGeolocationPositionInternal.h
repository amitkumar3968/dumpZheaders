/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebKit-Structs.h"


__attribute__((visibility("hidden")))
@interface WebGeolocationPositionInternal : NSObject {
@private
	RefPtr<WebCore::GeolocationPosition> _position;
}
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)initWithCoreGeolocationPosition:(PassRefPtr<WebCore::GeolocationPosition>)coreGeolocationPosition;
@end
