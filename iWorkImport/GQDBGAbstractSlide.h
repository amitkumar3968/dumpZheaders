/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GQDBGObjectPlaceholder, GQDSStylesheet, GQDBGSlideNumberPlaceholder, GQDBGTitlePlaceholder, GQDBGBodyPlaceholder, GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDBGAbstractSlide : XXUnknownSuperclass {
@private
	GQDSStylesheet* mStylesheet;
	GQDSStyle* mSlideStyle;
	GQDBGTitlePlaceholder* mTitlePlaceholder;
	GQDBGBodyPlaceholder* mBodyPlaceholder;
	GQDBGObjectPlaceholder* mObjectPlaceholder;
	GQDBGSlideNumberPlaceholder* mSlideNumberPlaceholder;
	BOOL mHidden;
	char* mID;
	BOOL mCallGenerator;
}
-(int)readAttributesForSlide:(xmlTextReader*)slide;
-(char*)ID;
-(BOOL)isHidden;
-(id)stylesheet;
-(id)slideStyle;
-(void)dealloc;
@end

