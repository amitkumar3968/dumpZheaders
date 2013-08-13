/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface WebUndoStep : NSObject {
@private
	RefPtr<WebCore::UndoStep> m_step;
}
+(id)stepWithUndoStep:(PassRefPtr<WebCore::UndoStep>)undoStep;
+(void)initialize;
-(id).cxx_construct;
-(void).cxx_destruct;
-(UndoStep*)step;
-(void)finalize;
-(void)dealloc;
-(id)initWithUndoStep:(PassRefPtr<WebCore::UndoStep>)undoStep;
@end
