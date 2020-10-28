//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBDomainAttributeDataProviding-Protocol.h>

@class NSDictionary, NSString;

@interface RBDomainAttributeManagerDataProvider : NSObject <RBDomainAttributeDataProviding>
{
    NSString *_path;
    NSDictionary *_rawTemplates;
}

// - (void).cxx_destruct;
- (id)_fullyQualifiedNameForDomain:(id)arg1 andName:(id)arg2;
- (id)_legalPropertyNamesByClassName;
- (id)_legalClassNames;
- (BOOL)_isAttributeClassNameLegal:(id)arg1;
- (BOOL)_isPropertyLegalForClassName:(id)arg1 propertyName:(id)arg2 value:(id)arg3 error:(id )arg4;
- (id)_validatedAttributeTemplateFromAttributeTemplate:(id)arg1 domainAttributeTemplate:(id)arg2 dependenciesByFullyQualifiedName:(id)arg3 errors:(id)arg4;
- (id)_validatedDomainAttributeTemplateFromDomainAttributeTemplate:(id)arg1 dependenciesByFullyQualifiedName:(id)arg2 errors:(id)arg3;
- (id)_templatesWithDomain:(id)arg1 fromDictionary:(id)arg2 errors:(id)arg3;
- (id)_templatesWithDomain:(id)arg1 fromFilename:(id)arg2 errors:(id)arg3;
- (id)_templateWithDomain:(id)arg1 name:(id)arg2 dictionary:(id)arg3 errors:(id)arg4;
- (id)_bundlePropertiesFromDictionary:(id)arg1 forDomainAttributeWithDomain:(id)arg2 name:(id)arg3 errors:(id)arg4;
- (id)_entitlementsFromDictionary:(id)arg1 forDomainAttributeWithDomain:(id)arg2 name:(id)arg3 errors:(id)arg4;
- (id)_attributeTemplateGroupsFromArray:(id)arg1 forDomainAttributeWithDomain:(id)arg2 name:(id)arg3 errors:(id)arg4;
- (id)_attributeTemplatesFromArray:(id)arg1 forDomainAttributeWithDomain:(id)arg2 name:(id)arg3 errors:(id)arg4;
- (id)_templatesByDomainWithErrors:(id)arg1;
- (id)_validatedTemplatesByDomainWithErrors:(id)arg1;
- (id)templatesByDomain;
- (id)validDomains;
- (id)validationErrors;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

