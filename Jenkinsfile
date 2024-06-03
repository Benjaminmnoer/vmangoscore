pipeline {
    agent any
    options {
        skipStagesAfterUnstable()
    }
    stages {
        stage('Clone repository') { 
            steps { 
                script {
                    checkout scm
                }
            }
        }
        stage('Build') { 
            steps { 
                script {
                    def app = docker.build("registry.benjaminmnoer.dk/vmangos")
                }
            }
        }
        stage('Test') {
            steps {
                 echo 'Empty'
            }
        }
        stage('Publish image') {
            steps {
                script {
                    docker.withRegistry('https://registry.benjaminmnoer.dk', 'registry.benjaminmnoer.dk-credentials') {
                        def image = docker.image("registry.benjaminmnoer.dk/vmangos")
                        if (env.BRANCH_NAME == 'master') {
                            image.push("latest")
                        } else {
                            image.push(env.BRANCH_NAME)
                        }
                    }
                }
            }
        }
    }
}