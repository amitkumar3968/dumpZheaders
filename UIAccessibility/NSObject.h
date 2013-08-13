/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import "UIAccessibility-Structs.h"
#import </libobjc.A.h>


@protocol NSObject
-(id)description;
-(unsigned)retainCount;
-(id)autorelease;
-(oneway void)release;
-(id)retain;
-(BOOL)respondsToSelector:(SEL)selector;
-(BOOL)conformsToProtocol:(id)protocol;
-(BOOL)isMemberOfClass:(Class)aClass;
-(BOOL)isKindOfClass:(Class)aClass;
-(BOOL)isProxy;
-(id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
-(id)performSelector:(SEL)selector withObject:(id)object;
-(id)performSelector:(SEL)selector;
-(NSZone*)zone;
-(id)self;
-(Class)class;
-(Class)superclass;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@optional
-(id)debugDescription;
@end

@interface NSObject (AccessibilityCategory)
+(id)accessibilityBundles;
+(void)accessibilityInitializeBundle;
@end

@interface NSObject (AXPrivCategory)
+(id)_accessibilityTextChecker;
-(void)_accessibilityPostAnnouncement:(id)announcement;
-(void)_accessibilityPostNotificationHelper:(id)helper;
-(void)accessibilityPostNotification:(unsigned)notification withObject:(id)object afterDelay:(double)delay;
-(void)_accessibilityScrollDownPage;
-(void)_accessibilityScrollUpPage;
-(void)_accessibilityScrollRightPage;
-(BOOL)_accessibilityScrollPreviousPage;
-(BOOL)_accessibilityScrollNextPage;
-(void)_accessibilityScrollLeftPage;
-(BOOL)accessibilityScrollUpPageSupported;
-(BOOL)accessibilityScrollDownPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)_accessibilityHandlePublicScroll:(int)scroll;
-(void)_accessibilityScrollToPoint:(CGPoint)point;
-(BOOL)_accessibilityScrollToVisible;
-(BOOL)_accessibilityElementShouldBeInvalid;
-(id)_accessibilityScrollAncestor;
-(BOOL)_accessibilityScrollingEnabled;
-(id)_accessibilityScrollAncestorForSelector:(SEL)selector;
-(BOOL)_accessibilityIsScrollable;
-(BOOL)_accessibilityIsScrollAncestor;
-(id)_accessibilityVisibleItemInList;
-(id)_accessibilityFirstVisibleItem;
-(BOOL)_accessibilityWindowVisible;
-(void)_setAccessibilityWindowVisible:(BOOL)visible;
-(BOOL)_accessibilityIsMainWindow;
-(BOOL)_accessibilityIsFirstElementForFocus;
-(void)_setAccessibilityIsMainWindow:(BOOL)window;
-(BOOL)_accessibilityIsNotFirstElement;
-(void)_setAccessibilityIsNotFirstElement:(BOOL)element;
-(BOOL)_accessibilityServesAsFirstElement;
-(void)_setAccessibilityServesAsFirstElement:(BOOL)element;
-(void)setIsAccessibilityScrollAncestor:(BOOL)ancestor;
-(void)setIsAccessibilityWindow:(BOOL)window;
-(void)setAccessibilitySize:(CGSize)size;
-(id)accessibilityUserDefinedSize;
-(id)accessibilityIdentification;
-(id)accessibilityUserDefinedNotFirstElement;
-(id)accessibilityUserDefinedServesAsFirstElement;
-(id)accessibilityUserDefinedIsMainWindow;
-(id)accessibilityUserDefinedWindowVisible;
-(id)isAccessibilityUserDefinedScrollAncestor;
-(id)isAccessibilityUserDefinedWindow;
-(void)_accessibilityUnregister;
-(void)__accessibilityUnregister:(id)unregister;
-(BOOL)_accessibilityShouldReleaseAfterUnregistration;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityElementDidBecomeFocused;
-(BOOL)accessibilityElementIsFocused;
-(id)accessibilityURL;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_axDebugTraits;
-(id)_accessibilityScrollStatus;
-(void)accessibilitySetIdentification:(id)identification;
-(id)_accessibilityAncestorIsAccessibilityElementsHidden;
-(id)_accessibilityAncestorIsKindOf:(Class)of;
-(id)_axSuperviews;
-(BOOL)_accessibilitySelfFoundByHitTesting;
-(id)_accessibilityHitTest:(CGPoint)test withEvent:(id)event;
-(id)_accessibilityBaseHitTest:(CGPoint)test withEvent:(id)event;
-(id)_accessibilityFuzzyHitTestElements;
-(id)_accessibilityHitTestSupplementaryViews:(id)views point:(CGPoint)point withEvent:(id)event;
-(id)accessibilityCandidateWordDescription:(id)description;
-(id)accessibilityHitTest:(CGPoint)test;
-(id)_accessibilityTouchContainer;
-(BOOL)_accessibilityIsTouchContainer;
-(void)_accessibilityAddTrait:(unsigned long long)trait;
-(void)_accessibilityRemoveTrait:(unsigned long long)trait;
-(id)_accessibilitySupplementaryFooterViews;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)accessibilityAttributeValue:(int)value forParameter:(id)parameter;
-(void)_accessibilitySetValue:(id)value forAttribute:(int)attribute;
-(id)accessibilityAttributeValue:(int)value;
-(void)_accessibilityHandleATFocused:(BOOL)focused;
-(id)_accessibilityPreviousElementsWithCount:(unsigned long)count originalElement:(id)element;
-(id)_accessibilityNextElementsWithCount:(unsigned long)count originalElement:(id)element;
-(id)_accessibilityContainerInDirection:(BOOL)direction originalElement:(id)element;
-(id)_accessibilityString:(id)string withSpeechHint:(id)speechHint;
-(id)_accessibilityParentView;
-(BOOL)_accessibilityUsesSpecialKeyboardDismiss;
-(id)_accessibilityApplication;
-(BOOL)_accessibilityIsDescendantOfElement:(id)element;
-(id)accessibilityViewWithIdentifier:(id)identifier;
-(id)_accessibilityUnignoredDescendant;
-(BOOL)_accessibilityHasDescendantOfType:(Class)type;
-(id)_accessibilityDescendantOfType:(Class)type;
-(CGPoint)_accessibilityConvertPointToViewSpace:(CGPoint)viewSpace;
-(id)_accessibilityFindDescendant:(id)descendant;
-(id)_accessibilityFindSubviewDescendant:(id)descendant;
-(id)_accessibilityFindAnyAXDescendant:(id)descendant byAddingElements:(id)elements;
-(CGRect)_accessibilityClassicModeFrame:(CGRect)frame;
-(void)_accessibilityIgnoreNextNotification:(unsigned)notification;
-(BOOL)_accessibilityIsFrameOutOfBounds;
-(id)_accessibilityScrollParent;
-(void)_accessibilityAnnouncementComplete:(id)complete;
-(int)accessibilityCompareGeometry:(id)geometry;
-(CGRect)_accessibilityConvertFrameForRemoteView:(CGRect)remoteView orientation:(int)orientation;
-(CGRect)_accessibilityCompareFrameForScrollParent:(id)scrollParent frame:(CGRect)frame;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(float)_accessibilityAllowedGeometryOverlap;
-(BOOL)_accessibilityUsesScrollParentForOrdering;
-(id)_accessibilityContainingParentForOrdering;
-(BOOL)_accessibilityServesAsContainingParentForOrdering;
-(BOOL)_accessibilityHasOrderedChildren;
-(CGRect)_accessibilityContentFrame;
-(BOOL)_accessibilityAlwaysOrderedFirst;
-(id)_accessibilityStatusBar;
-(void)accessibilityEnumerateContainerElementsUsingBlock:(id)block;
-(void)accessibilityEnumerateContainerElementsWithOptions:(unsigned)options usingBlock:(id)block;
-(BOOL)accessibilityShouldEnumerateContainerElementsArrayDirectly;
-(int)indexOfAccessibilityElement:(id)accessibilityElement;
-(id)accessibilityElementAtIndex:(int)index;
-(int)accessibilityElementCount;
-(id)accessibilityContainerElements;
-(void)_accessibilityResetContainerElements;
-(void)accessibilityActivate;
-(BOOL)_accessibilityTextOperationAction:(id)action;
-(BOOL)accessibilityEditOperationAction:(id)action;
-(BOOL)_accessibilityHasTextOperations;
-(void)_accessibilitySetCurrentGesture:(id)gesture;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityTextOperations;
-(id)accessibilityMenuActions;
-(void)_accessibilityCut;
-(void)_accessibilityReplace;
-(void)_accessibilityDelete;
-(void)_accessibilitySelect;
-(void)_accessibilitySelectAll;
-(void)_accessibilityPaste;
-(BOOL)_accessibilityPerformEscape;
-(void)accessibilityZoomOutAtPoint:(CGPoint)point;
-(void)accessibilityZoomInAtPoint:(CGPoint)point;
-(id)_accessibilityAllCustomRotorItemsAtIndex:(int)index;
-(id)_accessibilityAllCustomRotorTitles;
-(void)_accessibilityEnumerateAllCustomRotorTitlesWithAccumulator:(id*)accumulator usingBlock:(id)block;
-(id)_accessibilityContainerForAccumulatingCustomRotorItems;
-(BOOL)_accessibilityIsVisible;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityAttributedValueForRange:(NSRange*)range;
-(void)_accessibilityAddMispellingsToAttributedString:(id)attributedString;
-(id)_accessibilityTextChecker;
-(void)_accessibilitySetValue:(id)value;
-(id)_accessibilityValueForRange:(NSRange*)range;
-(BOOL)__accessibilityReadAllOnFocus;
-(BOOL)_accessibilityIsAwayAlertElementNew;
-(BOOL)_accessibilityIsAwayAlertElement;
-(BOOL)_accessibilityReadAllOnFocus;
-(CGPoint)__accessibilityVisibleScrollArea:(BOOL)area;
-(BOOL)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
-(id)_accessibilityMarkerLineEndsForMarkers:(id)markers;
-(id)_accessibilityMarkersForRange:(NSRange)range;
-(id)_accessibilityMarkersForPoints:(id)points;
-(id)_accessibilityInputIdentifierForKeyboard;
-(id)accessibilityLabelForRange:(NSRange*)range;
-(BOOL)_accessibilityObscuresScreen;
-(void)_setAccessibilityObscuresScreen:(BOOL)screen;
-(void)_accessibilitySetAnimationsInProgress:(BOOL)progress;
-(BOOL)_accessibilityAnimationsInProgress;
-(void)_accessibilitySetIsTourGuideRunning:(BOOL)running;
-(BOOL)_accessibilityIsTourGuideRunning;
-(void)_accessibilitySetCameraIrisOpen:(BOOL)open;
-(BOOL)_accessibilityCameraIrisOpen;
-(id)_accessibilityRetrieveImagePathLabel:(id)label;
-(void)_accessibilityPlayKeyboardClickSound;
-(void)_accessibilityPlaySystemSound:(int)sound;
-(int)_accessibilityBestCharacterModeForHandwriting;
-(BOOL)_accessibilityShouldEchoHandwritingCharacter;
-(BOOL)_accessibilityCanHandleDirectHandwritingInput;
-(void)_accessibilityInsertText:(id)text atPosition:(int)position;
-(void)_accessibilityDeleteCharacterAtCursor;
-(BOOL)_accessibilityCanDeleteCharacterWithHandwriting;
-(CGRect)_accessibilityTextCursorFrame;
-(unsigned)_accessibilityContextId;
-(BOOL)_accessibilityCanDismissPopoverController:(id)controller;
-(BOOL)_accessibilityDidDeleteTableViewCell;
-(BOOL)_accessibilityCanDeleteTableViewCell;
-(BOOL)_accessibilityShouldAnnounceFontInfo;
-(BOOL)_accessibilitySupportsMultipleCustomRotorTitles;
-(BOOL)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;
-(id)_accessibilityAppSwitcherApps;
-(id)_accessibilityLaunchableApps;
-(BOOL)_accessibilityIsInAppSwitcher;
-(NSRange)accessibilityColumnRange;
-(NSRange)accessibilityRowRange;
-(id)accessibilityElementForRow:(int)row andColumn:(int)column;
-(id)accessibilityTitleElement;
-(id)_accessibilityHeaderElement;
-(id)accessibilityHeaderElements;
-(BOOL)_accessibilityReadAllContinuesWithScroll;
-(id)_accessibilityKeyboardKeyForString:(id)string;
-(void)_accessibilitySetCurrentWordInPageContext:(id)pageContext;
-(id)accessibilityPlaceholderValue;
-(int)_accessibilityPageControlIndex;
-(int)_accessibilityPageControlCount;
-(BOOL)_accessibilityIsTitleElement;
-(BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)trait;
-(BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)trait;
-(BOOL)_accessibilityIsLastSibling;
-(BOOL)_accessibilityIsFirstSibling;
-(id)_accessibilityPageContent;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(CGPoint)_accessibilityMinScrubberPosition;
-(float)_accessibilityMaxValue;
-(float)_accessibilityMinValue;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned)position;
-(id)_accessibilityObjectForTextMarker:(id)textMarker;
-(id)accessibilityArrayOfTextForTextMarkers:(id)textMarkers;
-(id)accessibilityStringForTextMarkers:(id)textMarkers;
-(CGRect)accessibilityBoundsForTextMarkers:(id)textMarkers;
-(BOOL)accessibilityPerformCustomAction:(int)action;
-(void)_accessibilityChangeToKeyplane:(id)keyplane;
-(NSRange)_accessibilitySelectedNSRangeForObject;
-(id)_accessibilityTextMarkerRangeForSelection;
-(NSRange)_accessibilityRangeForTextMarker:(id)textMarker;
-(id)_accessibilityPageTextMarkerRange;
-(id)_accessibilityTextMarkerRange;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(id)_accessibilityPreviousMarker:(id)marker;
-(id)_accessibilityNextMarker:(id)marker;
-(id)_accessibiltyAvailableKeyplanes;
-(id)_accessibilityLineEndMarker:(id)marker;
-(id)_accessibilityMarkerForPoint:(CGPoint)point;
-(id)_accessibilityLineStartMarker:(id)marker;
-(CGRect)_accessibilityBoundsForRange:(NSRange)range;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)lineNumberAndColumn;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)point;
-(int)_accessibilityLineStartPosition;
-(int)_accessibilityLineEndPosition;
-(BOOL)accessibilityStartStopToggle;
-(id)_accessibilityResponderElement;
-(BOOL)_accessibilityServesAsFirstResponder;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)range;
-(BOOL)_accessibilityScrollToFrame:(CGRect)frame forView:(id)view;
-(BOOL)accessibilityRequired;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(BOOL)_accessibilityIsUserInteractionEnabled;
-(void)_accessibilityIncreaseSelection:(id)selection;
-(id)accessibilityInvalidStatus;
-(id)accessibilityPaths;
-(BOOL)_accessibilityBackingElementIsValid;
-(int)_accessibilityIndexForPickerString:(id)pickerString;
-(void)_accessibilityDecreaseSelection:(id)selection;
-(id)accessibilityLinkedElement;
-(id)_accessibilityUserTestingVisibleSections;
-(void)_accessibilitySwitchOrderedChildrenFrom:(id)from;
-(id)_accessibilityUserTestingVisibleCells;
-(BOOL)_accessibilityBookShowsDualPages;
-(id)_accessibilityAutomaticIdentifier;
-(unsigned)_accessibilityDatePickerComponentType;
-(int)_accessibilityPickerType;
-(CGRect)_accessibilityGesturePracticeRegion;
-(id)_accessibilityDateTimePickerValues;
-(BOOL)_accessibilityWebSearchResultsActive;
-(float)_accessibilityActivationDelay;
-(BOOL)accessibilityIsComboBox;
-(BOOL)_accessibilityTriggerDictationFromPath:(id)path;
-(void)_accessibilityJumpToTableIndex:(id)tableIndex;
-(void)_accessibilityFindSearchResult:(BOOL)result withString:(id)string;
-(BOOL)_accessibilityIsInTableCell;
-(BOOL)_accessibilityIsTableCell;
-(id)_accessibilityDataDetectorScheme:(CGPoint)scheme;
-(CGRect)accessibilityFrameForLineNumber:(int)lineNumber;
-(id)accessibilityContentForLineNumber:(int)lineNumber;
-(int)accessibilityLineNumberForPoint:(CGPoint)point;
-(id)accessibilityFlowToElements;
-(id)accessibilityPageContent;
-(CGPoint)_accessibilityVisibleScrollArea:(BOOL)area;
-(id)_accessibilityTableViewCellWithRowIndex:(int)rowIndex andColumn:(int)column;
-(id)accessibilityCustomRotorItemsAtIndex:(int)index;
-(id)accessibilityCustomActions;
-(id)accessibilityCustomRotorTitles;
-(BOOL)_accessibilityShouldAvoidAnnouncing;
-(id)_accessibilityElementsForSearchParameter:(id)searchParameter;
-(id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)traits;
-(id)accessibilitySpeechHint;
-(id)_accessibilityDOMAttributes;
-(void)_accessibilityMoveSelectionToMarker:(id)marker;
-(id)_accessibilityTextMarkerForPosition:(int)position;
-(int)_accessibilityMapFeatureType;
-(id)_accessibilitySupportedLanguages;
-(float)_accessibilityDistanceFromEndOfRoad:(CGPoint)road forAngle:(float)angle;
-(id)_accessibilityUpcomingRoadForPoint:(CGPoint)point forAngle:(float)angle;
-(id)_accessibilityMapDetailedInfoAtPoint:(CGPoint)point;
-(BOOL)_accessibilityRoadContainsTrackingPoint:(CGPoint)point;
-(BOOL)_accessibilityLastHitTestNearBorder;
-(id)_accessibilityBundleIdentifier;
-(id)accessibilityMathEquation;
-(id)accessibilityMathMLSource;
-(id)accessibilitySecondaryLabel;
@end

@interface NSObject (AccessibilityStorage)
-(BOOL)accessibilityPerformAction:(int)action withValue:(id)value;
-(BOOL)_accessibilityHandleMagicTap;
-(void)_accessibilityRemoveActionBlockForKey:(unsigned long)key;
-(void)_accessibilityRemoveAllActionBlocks;
-(void)_accessibilityActionBlock:(id*)block andValue:(id*)value forKey:(unsigned long)key;
-(BOOL)_accessibilityHasActionBlockForKey:(unsigned long)key;
-(BOOL)_accessibilityInternalHandleStartStopToggle;
-(void)_accessibilitySetActionBlock:(id)block withValue:(id)value forKey:(unsigned long)key;
-(void)_accessibilityRemoveValueForKey:(id)key;
-(void)_accessibilitySetUnsignedIntegerValue:(unsigned)value forKey:(id)key;
-(void)_accessibilitySetIntegerValue:(int)value forKey:(id)key;
-(void)_accessibilitySetBoolValue:(BOOL)value forKey:(id)key;
-(void)_accessibilitySetRetainedValue:(id)value forKey:(id)key;
-(void)_accessibilitySetAssignedValue:(id)value forKey:(id)key;
-(void)_accessibilitySetValue:(id)value forKey:(id)key storageMode:(int)mode;
-(unsigned)_accessibilityUnsignedIntegerValueForKey:(id)key;
-(int)_accessibilityIntegerValueForKey:(id)key;
-(BOOL)_accessibilityBoolValueForKey:(id)key;
-(id)_accessibilityValueForKey:(id)key;
@end

@interface NSObject (UIAccessibilityAutomation)
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityUserTestingChildrenWithRange:(NSRange)range;
-(int)_accessibilityUserTestingChildrenCount;
-(id)_accessibilityUserTestingSupplementaryViews:(BOOL)views;
-(id)_accessibilityAncestry;
-(id)_accessibilityUserTestingParent;
-(id)_accessibilityUserTestingElementType;
-(id)_accessibilityAbsoluteValue;
-(id)_accessibilityUserTestingElementBaseType;
-(id)_accessibilityUserTestingElementAttributes;
-(id)_accessibilityKeyboardKeyEnteredString;
-(BOOL)_accessibilityUserTestingIsRightNavButton;
-(BOOL)_accessibilityUserTestingIsBackNavButton;
-(void)_accessibilitySetUserTestingIsCancelButton:(BOOL)button;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
@end
