//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSFormMetadataController : NSObject
{
    struct HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>> _framesToMetadataMap;
}

+ (BOOL)convertNumber:(id)arg1 toFormMetadataRequestType:(NSUInteger )arg2;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)metadataForActiveFormInPageWithMainFrame:(id)arg1;
- (void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 blurAfterRemoval:(BOOL)arg4;
- (id)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(double)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(BOOL)arg6;
- (BOOL)shouldIncludeNonEmptyFields;
- (id)visibleNonEmptyTextFieldsInForm:(id)arg1 inFrame:(id)arg2;
- (id)formSubmissionURLStringForSearchTextField:(id)arg1 inFrame:(id)arg2 useStrictDetection:(BOOL)arg3;
- (id)formAutoFillNodeForField:(id)arg1 inFrame:(id)arg2;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue )arg1 inContext:(struct OpaqueJSContext )arg2;
- (BOOL)autoFillFrameIsValid:(id)arg1;
- (void)addressBookAutoFillableFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (BOOL)addressBookAutoFillableFieldFocused:(id)arg1 withAddressBookAutoFillableFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)oneTimeCodeFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)oneTimeCodeFieldFocused:(id)arg1 withFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)usernameFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4;
- (void)creditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)passwordFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(BOOL)arg3;
- (id)formElementWithFormID:(double)arg1 inFrame:(id)arg2;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2;
- (void)willSendSubmitEventForForm:(id)arg1 inFrame:(id)arg2;
- (void)textFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)textFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)otherCreditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)otherCreditCardFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)unidentifiedTextFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)unidentifiedTextFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (BOOL)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1;
- (void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(NSUInteger )arg2 textAreas:(NSUInteger )arg3;
- (void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(NSUInteger )arg2 textAreas:(NSUInteger )arg3;
- (NSUInteger)userEditedTextControlCountInArray:(struct OpaqueJSValue )arg1 context:(struct OpaqueJSContext )arg2 expectTextFieldsRatherThanTextAreas:(BOOL)arg3;
- (id)uniqueIDForTextField:(id)arg1 inFrame:(id)arg2;
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id )arg3 formMetadata:(id )arg4 requestType:(NSUInteger)arg5;
- (void)_unlockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (void)_lockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (id)_formMetadataByAddingInformationAboutUserEditedStateForUserNameAndPasswordFieldsToFormMetadata:(id)arg1 inFrame:(id)arg2;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(NSUInteger)arg3 addUserEditedStateForUserNameAndPasswordFields:(BOOL)arg4;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(NSUInteger)arg3;
- (struct OpaqueJSValue )_jsObjectForForm:(id)arg1 inFrame:(id)arg2;
- (void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(NSUInteger)arg2 frames:(id )arg3 formMetadata:(id )arg4;
- (void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(NSUInteger)arg2 frames:(id)arg3 formMetadata:(id)arg4;
- (struct FrameMetadata )metadataForFrame:(id)arg1 requestType:(NSUInteger)arg2;
- (void)recursivelyClearMetadataForFrames:(id)arg1;
- (void)clearMetadataForFrame:(id)arg1;
- (BOOL)isFrameOrChildAnnotated:(id)arg1;
- (BOOL)isFrameAnnotated:(id)arg1;
- (void)replaceRange:(NSRange)arg1 inField:(id)arg2 inFrame:(id)arg3 withString:(id)arg4 andSelectTailStartingAt:(NSUInteger)arg5;
- (void)selectRange:(NSRange)arg1 inField:(id)arg2 inFrame:(id)arg3;
- (NSRange)selectionRangeInField:(id)arg1 inFrame:(id)arg2;
- (void)disableSpellCheckInField:(id)arg1 inFrame:(id)arg2;
- (void)focusField:(id)arg1 inFrame:(id)arg2;
- (void)clearField:(id)arg1 inFrame:(id)arg2;
- (void)fillField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3;
- (void)setFormControls:(id)arg1 inFrame:(id)arg2 asAutoFilled:(BOOL)arg3;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3;
- (void)focusFormForStreamlinedLogin:(double)arg1 inFrame:(id)arg2;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 focusFieldAfterFilling:(BOOL)arg5 fieldToFocus:(id)arg6 submitForm:(BOOL)arg7;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 focusFieldAfterFilling:(BOOL)arg5 fieldToFocus:(id)arg6;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 selectFieldAfterFilling:(id)arg5;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2;
- (void)annotateForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)clearScriptWorld;
- (id)init;

@end

